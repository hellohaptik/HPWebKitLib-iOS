//
//  ViewController.swift
//  Example-Dep
//
//  Created by Ketan on 12/04/21.
//

import UIKit
import HPWebKit

class ViewController: UIViewController {

    @IBOutlet weak var actInd: UIActivityIndicatorView!
    var launchState = false
    
    @IBOutlet weak var launchButton: UIButton!
    override func viewDidLoad() {
        super.viewDidLoad()
        HPKit.sharedSDK.details()
        // Do any additional setup after loading the view.
        HPKit.sharedSDK.delegate = self
        if  HPKit.sharedSDK.getHPKitStatus() == .ready {
            setLaunchState(enable: true)
        }
        else {
            setLaunchState(enable: false)
        }
        
        
    }

    @IBAction func launchConversation(_ sender: Any) {
       
        do {
            try HPKit.sharedSDK.loadGuestConversation(launchController: self, customData: nil)
        } catch {
            print(error)
        }
        
    }
    
    func setLaunchState(enable:Bool) {
        
        if enable ==  true {
            self.launchButton.isUserInteractionEnabled = true
            self.launchButton.alpha = 1.0
            self.actInd.stopAnimating()
        } else {
            self.launchButton.isUserInteractionEnabled = false
            self.launchButton.alpha = 0.5
            self.actInd.startAnimating()
        }
        
        launchState = enable
    }
    
    @IBAction func clearChat(_ sender: Any) {
        HPKit.sharedSDK.logout()
    }
    
    
// Example code 
//    func updateHaptikUserData()  {
//        let customdata: [String : Any] = ["UserUpdate1":"String",
//                                             "UserUpdate2":55556,
//                                             "UserUpdate3":false]
//
//        let payload: [String : Any] = ["custom_data":customdata,
//                                        "username" : "customTest"]
//
//        HPKit.sharedSDK.updateUserData(data: payload)
//    }
}

extension ViewController : HPExternalEvent {
    func HPKitEvent(data: Any) {
        
    }
    
    func HPUserSignupUpdate(result: HPResponse) {
        
    }
    
    func HPKitLoadingState(state: HPLoadingState, view: UIView) {
        
    }
    
    func HPKitDidLoad() {
        
        setLaunchState(enable: true)
    }
    
    
}
