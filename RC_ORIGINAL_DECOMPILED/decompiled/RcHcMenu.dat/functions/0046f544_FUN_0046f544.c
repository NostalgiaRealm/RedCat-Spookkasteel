/*
 * FUN_0046f544 at 0046f544
 * undefined4 __register FUN_0046f544(void)
 * Address ranges: 0046f544-0046f561
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046f544(void)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int in_stack_00000004;
  
  bVar1 = *(char *)(in_stack_00000004 + -1) - 8;
  uVar2 = CONCAT31((int3)((uint)in_stack_00000004 >> 8),bVar1);
  bVar3 = bVar1 < 0x37;
  if (bVar1 < 0x38) {
    uVar2 = bVar1 & 0x7f;
    bVar3 = ((byte)(&DAT_0046f564)[(int)uVar2 >> 3] >> (bVar1 & 7) & 1) != 0;
  }
  return CONCAT31((int3)(uVar2 >> 8),bVar3);
}

