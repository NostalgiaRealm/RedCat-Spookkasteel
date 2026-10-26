/*
 * FUN_005c0a50 at 005c0a50
 * undefined FUN_005c0a50(void)
 * Address ranges: 005c0a50-005c0b66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005c0a50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_3 < *(int *)(param_1 + 0x14)) || (7 < param_4)) {
    uVar4 = 0x27e;
  }
  else {
    if ((-1 < *(int *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x70) == 0)) {
      if (param_3 <= param_4) {
        iVar3 = param_3 * 4;
        iVar2 = param_3;
        do {
          iVar1 = FUN_005c0f40(param_1,iVar2,param_5,param_6,param_7,1);
          *(int *)(iVar3 + param_3 * -4 + param_2) = iVar1;
          if (iVar1 == 0) {
            FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x28d,
                         &DAT_006b3f70,0);
            if (iVar2 + -1 < param_3) {
              return 0;
            }
            iVar3 = ((iVar2 + -1) - param_3) + 1;
            do {
              FUN_005c02b0();
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 <= param_4);
      }
      return 1;
    }
    uVar4 = 0x284;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar4,
               &DAT_006b3f70,0);
  return 0;
}

