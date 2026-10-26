/*
 * FUN_004844dc at 004844dc
 * undefined __register FUN_004844dc(int param_1, char param_2)
 * Address ranges: 004844dc-00484557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004844dc(int param_1,char param_2)

{
  short sVar1;
  uint uVar2;
  undefined2 local_8d;
  undefined2 local_83;
  
  if (param_2 != '\0') {
    uVar2 = thunk_FUN_00479cbe(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar2);
    *(uint *)(param_1 + 0x58) = (uint)local_83;
    *(undefined2 *)(param_1 + 0x1e8) = local_8d;
  }
  sVar1 = *(short *)(param_1 + 0x1e8) + *(short *)(param_1 + 0x5c);
  *(short *)(param_1 + 0x1ee) = sVar1;
  sVar1 = *(short *)(param_1 + 0x68) * 4 + sVar1;
  *(short *)(param_1 + 0x1ec) = sVar1;
  sVar1 = sVar1 + 6;
  *(short *)(param_1 + 0x1ea) = sVar1;
  *(short *)(param_1 + 0x1f0) = sVar1 + *(short *)(param_1 + 0x58);
  return;
}

