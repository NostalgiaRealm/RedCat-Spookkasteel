/*
 * FUN_0047fc20 at 0047fc20
 * undefined4 __register FUN_0047fc20(int param_1)
 * Address ranges: 0047fc20-0047fc6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047fc20(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (param_1 != 0) {
    iVar4 = 1;
    while (iVar2 = FUN_00404030(param_1), iVar4 <= iVar2) {
      bVar1 = *(byte *)(param_1 + -1 + iVar4);
      if (bVar1 == 0x3a) {
        return uVar3;
      }
      if (bVar1 == 0x5c) {
        return uVar3;
      }
      if (((byte)PTR_DAT_005725fc[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 + 2;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

