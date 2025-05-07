//
//  AppDelegate.swift
//  SPM-Demo
//
//  Created by Ketan Doiphode on 05/05/25.
//

import UIKit
import HPWebKit

@main
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        HPKit.sharedSDK.setup()
        return true
    }


}

