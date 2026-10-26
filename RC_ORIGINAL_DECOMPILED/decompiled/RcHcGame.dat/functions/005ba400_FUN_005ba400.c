/*
 * FUN_005ba400 at 005ba400
 * undefined FUN_005ba400(void)
 * Address ranges: 005ba400-005ba522
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ba400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xc1c) == 0) {
    iVar1 = FUN_005d6b50();
    *(int *)(param_1 + 0xc1c) = iVar1;
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xd34,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1c8);
  if (iVar1 != 0) {
    iVar1 = FUN_005d4090(iVar1);
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_005d40a0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c8),iVar5);
        uVar3 = FUN_005d46d0(uVar2);
        FUN_005d46c0(uVar2);
        iVar4 = FUN_005c3350(0);
        if (iVar4 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xd50,
                       &DAT_006b3f70,0);
          return 0;
        }
        iVar4 = FUN_005ba560(param_1,uVar3);
        if (iVar4 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0xd56,
                       &DAT_006b3f70,0);
          return 0;
        }
        iVar5 = iVar5 + 1;
        *(undefined4 *)(param_1 + 0xc54) = 1;
      } while (iVar5 < iVar1);
    }
  }
  return 1;
}

