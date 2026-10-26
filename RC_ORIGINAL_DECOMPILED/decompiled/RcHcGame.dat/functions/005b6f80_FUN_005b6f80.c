/*
 * FUN_005b6f80 at 005b6f80
 * undefined FUN_005b6f80(void)
 * Address ranges: 005b6f80-005b7014
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005b6f80(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_005cf3b0(0x68);
  if (iVar1 == 0) {
    FUN_005cf220(0x60,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,0x88,&DAT_006b3f70,0
                );
    return 0;
  }
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined2 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined2 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined2 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  puVar2 = (undefined4 *)(iVar1 + 0x48);
  iVar3 = 4;
  do {
    *(undefined2 *)(puVar2 + -1) = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar1 + 0x40) = 1;
  *(int *)(iVar1 + 100) = iVar1;
  FUN_005b2e20(0,0,0);
  FUN_005b2e20(0,0,0);
  return iVar1;
}

