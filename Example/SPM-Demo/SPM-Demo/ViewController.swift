//
//  ViewController.swift
//  SPM-Demo
//
//  Created by Ketan Doiphode on 05/05/25.
//

import UIKit
import HPWebKit
class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    
    @IBAction func launcBotPressed(_ sender: Any) {
        do {
            try HPKit.sharedSDK.loadGuestConversation(launchController: self, customData: nil)
        } catch {
            print("Failed to launch bot: \(error)")
        }
    }

    
    
}

