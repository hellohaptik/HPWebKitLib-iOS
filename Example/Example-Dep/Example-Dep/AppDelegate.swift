//
//  AppDelegate.swift
//  Example-Dep
//
//  Created by Ketan on 12/04/21.
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

