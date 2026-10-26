/*
 * FUN_005c9a70 at 005c9a70
 * undefined FUN_005c9a70(void)
 * Address ranges: 005c9a70-005c9cd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c9a70(int param_1,undefined4 param_2)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  int iVar5;
  int iStack_4;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x33660) = 0;
  bVar2 = false;
  if (s_GlideDrv_dll_006aa004[0] == '\0') {
    *(undefined4 *)(param_1 + 0x33678) = 0;
    return 1;
  }
  do {
    iVar3 = FUN_005c9560(iVar5);
    if (iVar3 != 0) {
      if (((bVar2) && (1 < iVar5)) && (iVar5 < 4)) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x21c,
                     &DAT_006b3f70,s_GlideDrv_dll_006aa004 + iVar5 * 200);
      }
      else {
        if (DAT_006cc4a0 != (code *)0x0) {
          (*DAT_006cc4a0)(1,iVar5,99);
        }
        pcVar1 = s_GlideDrv_dll_006aa004 + iVar5 * 200;
        hModule = (HMODULE)FUN_005bc3e0(pcVar1,param_2);
        if (hModule == (HMODULE)0x0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x22b,
                       &DAT_006b3f70,pcVar1);
        }
        else {
          *(char **)(param_1 + 0x33664) = pcVar1;
          pFVar4 = GetProcAddress(hModule,s_DriverHook_006a959c);
          if (pFVar4 == (FARPROC)0x0) {
            FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x23b,
                         &DAT_006b3f70,pcVar1);
            FreeLibrary(hModule);
          }
          else {
            iVar3 = (*pFVar4)(&iStack_4);
            if (iVar3 == 0) {
              FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,
                           0x247,&DAT_006b3f70,pcVar1);
              FreeLibrary(hModule);
            }
            else if ((*(int *)(iStack_4 + 4) == 100) && (*(int *)(iStack_4 + 8) == 3)) {
              *(int *)(param_1 + 0x33678) = iStack_4;
              iVar3 = (**(code **)(iStack_4 + 0x14))();
              if (iVar3 != 0) {
                if (iVar5 == 0) {
                  bVar2 = true;
                }
                if (DAT_006cc4a0 != (code *)0x0) {
                  (*DAT_006cc4a0)(0,iVar5,1);
                }
                FreeLibrary(hModule);
                goto LAB_005c9c91;
              }
              FreeLibrary(hModule);
              FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,
                           0x262,&DAT_006b3f70,pcVar1);
            }
            else {
              FreeLibrary(hModule);
              FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,
                           0x254,&DAT_006b3f70,pcVar1);
            }
          }
        }
        if (DAT_006cc4a0 != (code *)0x0) {
          (*DAT_006cc4a0)(0,iVar5,0);
        }
      }
    }
LAB_005c9c91:
    iVar5 = iVar5 + 1;
    if (s_GlideDrv_dll_006aa004[iVar5 * 200] == '\0') {
      *(undefined4 *)(param_1 + 0x33678) = 0;
      return 1;
    }
  } while( true );
}

