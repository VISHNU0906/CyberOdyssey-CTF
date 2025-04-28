# Cyber Odyssey CTF Platform 🚩🔐
[![GitHub License](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![Docker Build](https://img.shields.io/docker/cloud/build/yourusername/ctfd-cyberodyssey)](https://hub.docker.com/r/yourusername/ctfd-cyberodyssey)
[![Python Version](https://img.shields.io/badge/Python-3.8%2B-blue)](https://www.python.org/)

**Enterprise-grade CTF platform with modular challenges, auto-scoring, and multi-cloud deployment capabilities.**

---

## 🌟 Key Features
- 🕵️ **3 Difficulty Tiers**: Crypto, Stego, Reverse Engineering challenges
- 📊 **Real-Time Leaderboard**: Integrated with CTFd scoring engine
- 🐳 **Docker-First Architecture**: Single-command deployment
- ☁️ **Cloud Agnostic**: Deploy on AWS/GCP/Azure or bare metal
- 🔄 **CI/CD Ready**: GitHub Actions pipeline included
- 📚 **Challenge Templates**: Create new challenges in minutes

---

## 🧱 Project Architecture
```bash
CyberOdyssey-CTF/
├── CTFd_app/                  # Core CTFd Application
│   ├── app/                   # Custom CTFd plugins
│   ├── Dockerfile             # Multi-stage build config
│   ├── requirements.txt       # Python dependencies
│   └── config/                # Environment configurations
├── challenges/                # Challenge Modules
│   ├── crypto/                # Cryptography challenges
│   ├── stego/                 # Steganography challenges
│   └── reversing/             # Reverse Engineering challenges
├── infra/                     # Infrastructure-as-Code
│   ├── terraform/             # AWS/GCP provisioning
│   └── kubernetes/            # Helm charts for cluster deployment
├── docs/                      # Documentation
│   ├── SETUP.md               # Detailed installation guide
│   └── CHALLENGE_CREATION.md  # Challenge development guide
└── scripts/                   # Automation scripts
    ├── deploy.sh              # One-click deployment
    └── challenge_verify.sh    # Automated challenge testing

# 🚀 Getting Started

## 📋 Prerequisites
- Python 3.8+
- Docker 20.10+
- Git 2.30+

## 🛠️ Installation
```bash
# Clone repository
git clone https://github.com/YourUsername/CyberOdyssey-CTF.git
cd CyberOdyssey-CTF

# Build Docker containers
docker-compose -f CTFd_app/docker-compose.yml build

# Start services
docker-compose -f CTFd_app/docker-compose.yml up -d

# Core Configuration
SECRET_KEY=your_super_secure_key
DATABASE_URL=postgresql://user:pass@db:5432/ctfd

# Email Settings
MAIL_SERVER=smtp.gmail.com
MAIL_PORT=587
MAIL_USE_TLS=true
MAIL_USERNAME=your@email.com
MAIL_PASSWORD=app_password

# Challenge Settings
MAX_TEAM_SIZE=3
REGISTRATION_OPEN=true

name: "Caesar's Revenge"
category: "Cryptography"
value: 100
flag: "flag{rot13_is_too_mainstream}"
files:
  - ciphertext.txt
  - hint.txt
requirements:
  - "Basic Python"
  - "Cryptography Concepts"

Production Deployment
AWS EC2 Deployment
# Using Terraform
cd infra/terraform/aws
terraform init
terraform apply -var="access_key=YOUR_AWS_KEY" -var="secret_key=YOUR_AWS_SECRET"
