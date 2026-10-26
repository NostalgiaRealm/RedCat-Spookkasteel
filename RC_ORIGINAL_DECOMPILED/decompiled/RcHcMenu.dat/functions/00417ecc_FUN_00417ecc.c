/*
 * FUN_00417ecc at 00417ecc
 * undefined __register FUN_00417ecc(undefined4 param_1, int * param_2)
 * Address ranges: 00417ecc-00417f78;00417f80-00417f91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417ecc(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x417ee5;
  iVar2 = FUN_004032b4(*param_2);
  puStack_24 = (undefined1 *)0x417eea;
  iVar2 = FUN_0040f7bc(iVar2);
  iVar2 = (int)*(short *)(iVar2 + 8);
  if (iVar2 < 1) {
    puStack_24 = (undefined1 *)0x417f8b;
    (**(code **)(*param_2 + 4))(param_2,param_1);
    return;
  }
  puStack_24 = (undefined1 *)0x417f06;
  puVar3 = (undefined4 *)FUN_004027e8(iVar2 << 2);
  puStack_28 = &LAB_00417f79;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar4 = FUN_004032b4(*param_2);
  FUN_0040f974(iVar4,puVar3);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      puVar1 = (undefined4 *)puVar3[iVar4];
      if (puVar1 == (undefined4 *)0x0) break;
      uVar5 = FUN_0040f9c8(param_2,(int)puVar1);
      if ((char)uVar5 != '\0') {
        FUN_00418ce4(param_1,param_2,puVar1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)0x417f80;
  puStack_28 = (undefined1 *)0x417f78;
  FUN_00402800((int)puVar3);
  return;
}

