/*
 * FUN_00444124 at 00444124
 * undefined1 __register FUN_00444124(int param_1)
 * Address ranges: 00444124-0044414f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00444124(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2f);
  if ((*(byte *)(param_1 + 0x2f) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_00444124(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_0056f8f0)[bVar1 & 0x7f];
  }
  return (&DAT_0056f8f4)[uVar2 & 0x7f];
}

