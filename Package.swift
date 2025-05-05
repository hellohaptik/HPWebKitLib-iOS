// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "HPWebKit",
    platforms: [
        .iOS(.v12) // Adjust as needed
    ],
    products: [
        .library(
            name: "HPWebKit",
            targets: ["HPWebKit"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "HPWebKit",
            path: "./Frameworks/HaptikWebKit/HPWebKit.xcframework"
        )
    ]
)
