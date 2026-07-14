pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make'
            }
        }

        stage('Run Application') {
            steps {
                sh './app'
            }
        }

        stage('Build Tests') {
            steps {
                sh 'make test'
            }
        }

        stage('Run Tests') {
            steps {
                sh './test_app'
            }
        }
    }

    post {
        always {
            sh 'make clean'
        }
    }
}
