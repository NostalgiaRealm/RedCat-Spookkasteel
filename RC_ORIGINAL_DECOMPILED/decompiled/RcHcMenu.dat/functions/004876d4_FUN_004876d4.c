/*
 * FUN_004876d4 at 004876d4
 * undefined4 __register FUN_004876d4(int param_1, uint param_2)
 * Address ranges: 004876d4-00487716
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004876d4(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  sVar1 = (short)param_2 + -1;
  if ((short)param_2 == 0) {
    return CONCAT31((int3)(CONCAT22((short)(param_2 >> 0x10),sVar1) >> 8),1);
  }
  if (sVar1 != 0x2901) {
    FUN_0047fe30(param_2);
    return 0;
  }
  iVar2 = FUN_0048775c(param_1);
  uVar3 = FUN_0048135c(iVar2,extraout_EDX,extraout_ECX);
  if ((char)uVar3 == '\0') {
    FUN_0047fe30(param_2);
  }
  return 0;
}

