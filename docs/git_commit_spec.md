quant-trading-demo/          # 项目根目录
├── .gitignore               # Git忽略配置
├── README.md                # 项目说明（环境部署、启动方法）
├── docs/                    # 文档目录（环境配置手册、模块设计文档）
│   ├── env_config.md        # 环境配置手册
│   ├── market_data_design.md# 行情模块设计文档
│   └── strategy_design.md   # 策略模块设计文档
├── src/                     # 源代码目录
│   ├── market_data/         # 行情处理模块
│   ├── order_book/          # 订单簿模块
│   ├── strategy/            # 策略引擎模块
│   ├── risk_control/        # 风险控制模块
│   ├── order_execution/     # 订单执行模块
│   └── main.cpp             # 系统主函数
├── test/                    # 测试代码目录
│   ├── test_market_data.cpp
│   └── test_order_book.cpp
└── log/                     # 日志目录（被.gitignore忽略）