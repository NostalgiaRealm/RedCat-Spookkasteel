/*
 * FUN_00482f8c at 00482f8c
 * undefined __register FUN_00482f8c(int param_1)
 * Address ranges: 00482f8c-00482ff2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482f8c(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 auStack_2c [8];
  undefined1 local_24 [32];
  
  local_30 = auStack_2c;
  uStack_34 = 0x20;
  local_38 = local_24;
  uVar2 = thunk_FUN_00479000(*(undefined4 *)(param_1 + 0x70));
  FUN_0047fe48(uVar2);
  iVar3 = FUN_0040a250((char *)&local_38,"STANDARD");
  *(bool *)(param_1 + 0x66) = iVar3 != 0;
  sVar1 = thunk_FUN_00479000(*(undefined4 *)(param_1 + 0x70));
  *(bool *)(param_1 + 0x68) = sVar1 == 0;
  return;
}

