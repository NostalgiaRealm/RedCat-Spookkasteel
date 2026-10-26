/*
 * FUN_005ccb40 at 005ccb40
 * undefined FUN_005ccb40(void)
 * Address ranges: 005ccb40-005ccdb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ccb40(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (*param_2 != 0) {
    for (puVar1 = (undefined4 *)param_2[1]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      iVar3 = __strcmpi((char *)puVar1[1],s_classname_006aa46c);
      if ((iVar3 != 0) && (*(char *)puVar1[1] != '%')) {
        iVar3 = FUN_005cc5c0(*param_2,(char *)puVar1[1]);
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = param_2[2];
        switch(*(undefined4 *)(*(int *)(iVar3 + 4) + 4)) {
        case 0:
          FUN_0060b449(puVar1[2],&DAT_00690818,*(int *)(iVar3 + 8) + iVar2);
          break;
        case 1:
          FUN_0060b449(puVar1[2],&DAT_006aa4e8,&local_10);
          *(float *)(*(int *)(iVar3 + 8) + iVar2) = (float)local_10;
          break;
        case 2:
          FUN_0060b449(puVar1[2],s__lf__lf__lf_006aa4dc,&local_28,&local_20,&local_18);
          *(float *)(*(int *)(iVar3 + 8) + iVar2) = (float)local_28;
          *(float *)(*(int *)(iVar3 + 8) + 4 + iVar2) = (float)local_20;
          *(float *)(*(int *)(iVar3 + 8) + 8 + iVar2) = (float)local_18;
          *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc + iVar2) = 0;
          break;
        case 3:
          FUN_0060b449(puVar1[2],s__lf__lf__lf_006aa4dc,&local_28,&local_20,&local_18);
          *(float *)(*(int *)(iVar3 + 8) + iVar2) = (float)local_28;
          *(float *)(*(int *)(iVar3 + 8) + 4 + iVar2) = (float)local_20;
          *(float *)(*(int *)(iVar3 + 8) + 8 + iVar2) = (float)local_18;
          break;
        case 4:
          *(undefined4 *)(*(int *)(iVar3 + 8) + iVar2) = puVar1[2];
          break;
        case 5:
          iVar4 = FUN_005cc6e0(param_1,puVar1[2]);
          if (iVar4 == 0) {
            FUN_005cf220(0x2f,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa4a0,0x35a,
                         &DAT_006b3f70,0);
            return 0;
          }
          iVar4 = FUN_005cc2a0(iVar4,s_Model_006aa4d4,&local_2c);
          if (iVar4 == 0) {
            FUN_005cf220(0x30,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa4a0,0x360,
                         &DAT_006b3f70,0);
            return 0;
          }
          *(int *)(*(int *)(iVar3 + 8) + iVar2) =
               *(int *)(DAT_006cc5b0 + 0x18) + 0x1cc + local_2c * 0xd4;
          break;
        case 6:
          iVar4 = FUN_005cc6e0(param_1,puVar1[2]);
          if (iVar4 == 0) {
            return 0;
          }
          *(undefined4 *)(*(int *)(iVar3 + 8) + iVar2) = *(undefined4 *)(iVar4 + 8);
          break;
        case 7:
          *(undefined4 *)(*(int *)(iVar3 + 8) + iVar2) = 0;
          break;
        default:
          FUN_005cf220(0x2e,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa4a0,0x377,
                       &DAT_006b3f70,0);
          return 0;
        }
      }
    }
  }
  return 1;
}

