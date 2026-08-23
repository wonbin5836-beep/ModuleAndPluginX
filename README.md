# 언리얼 모듈과 플러그인

## 프로젝트 소개
- **프로젝트명:** ModuleAndPluginX
- **개발 환경:** Unreal Engine 5.5.4, Visual Studio 2022 , Rider
- **학습 목표:** 프로젝트 - 플러그인 - 모듈 - 소스코드 간 계층 구조 파악 및 수동으로 모듈/플러그인 제작 및 추가

---

## 폴더 구조
ModuleAndPlugin/
├── Config/
├── Content/
├── Source/
│   ├── ModuleAndPlugin/         # Primary Game Module (주 로직)
│   └── Test/                    # 서브 C++ 모듈 (PreDefault 로딩)
│       ├── Private/
│       ├── Public/
│       └── Test.Build.cs
├── Plugins/
│   └── Temporary/               # 콘텐츠 + 로직 결합 독립 플러그인
│       ├── Content/
│       ├── Source/
│       └── Temporary.uplugin
└── ModuleAndPlugin.uproject      # 모듈 및 플러그인 메타데이터 관리 파일

---

## 주요 구현 내용
1. **`Test` C++ 모듈**
   - `Test.Build.cs`, `Test.h`, `Test.cpp` 구성 및 `IMPLEMENT_MODULE` 정의
   - `.uproject` 및 `Target.cs`에 등록하여 메인 캐릭터에서 `TestActor` 스폰 검증
2. **`Temporary` 독립 플러그인 구축**
   - `Temporary.uplugin` 메타데이터 작성
   - 플러그인 내부 모듈 구현 및 에디터 콘텐츠 브라우저 표시 확인
