/*
 * FUN_00475a50 at 00475a50
 * undefined4 __register FUN_00475a50(undefined4 param_1)
 * Address ranges: 00475a50-00475a68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00475a50(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint3 uVar3;
  
  iVar2 = CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 + -5);
  if (2 < (byte)((char)param_1 - 2U)) {
    bVar1 = (byte)(iVar2 + -1);
    uVar3 = (uint3)((uint)(iVar2 + -1) >> 8);
    iVar2 = (uint)uVar3 << 8;
    if (((2 < bVar1) && (iVar2 = CONCAT31(uVar3,bVar1 - 8), (byte)(bVar1 - 8) != '\0')) &&
       (iVar2 = CONCAT31(uVar3,bVar1 - 0x13), (byte)(bVar1 - 0x13) != '\0')) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

