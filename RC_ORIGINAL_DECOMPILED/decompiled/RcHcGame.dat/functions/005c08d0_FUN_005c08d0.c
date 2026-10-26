/*
 * FUN_005c08d0 at 005c08d0
 * undefined FUN_005c08d0(void)
 * Address ranges: 005c08d0-005c0a40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c08d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_3 < *(int *)(param_1 + 0x14)) && (param_3 < *(int *)(param_1 + 0x90))) ||
     (7 < param_4)) {
    uVar3 = 0x243;
  }
  else {
    if ((-1 < *(int *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x70) == 0)) {
      if (param_3 <= param_4) {
        iVar1 = param_3 * 4;
        iVar2 = param_3;
        do {
          if (((*(int *)(param_1 + 0xac) == 0) || (*(int *)(param_1 + 0xb8) == 0)) ||
             ((*(int *)(param_1 + 0x94) < iVar2 || (iVar2 < *(int *)(param_1 + 0x90))))) {
            uVar3 = FUN_005c1140(param_1,iVar2,1);
            *(undefined4 *)(iVar1 + param_3 * -4 + param_2) = uVar3;
          }
          else {
            uVar3 = FUN_005c1230(param_1,iVar2,1);
            *(undefined4 *)(iVar1 + param_3 * -4 + param_2) = uVar3;
          }
          if (*(int *)(iVar1 + param_3 * -4 + param_2) == 0) {
            FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x25b,
                         &DAT_006b3f70,0);
            if (iVar2 + -1 < param_3) {
              return 0;
            }
            iVar1 = ((iVar2 + -1) - param_3) + 1;
            do {
              FUN_005c02b0();
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar2 <= param_4);
      }
      return 1;
    }
    uVar3 = 0x249;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar3,
               &DAT_006b3f70,0);
  return 0;
}

