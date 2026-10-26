/*
 * FUN_00509fa8 at 00509fa8
 * undefined4 __register FUN_00509fa8(int param_1, int * param_2)
 * Address ranges: 00509fa8-00509ffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x509aec slot 2 for TDaviDateComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x509aec slot 2 for
   TDaviDateComboItem. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00509fa8(int param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0040320c(param_2,(int)&PTR_FUN_00509aec);
  if ((char)uVar3 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar4 = FUN_00403224(param_2,(int)&PTR_FUN_00509aec);
  dVar1 = *(double *)(iVar4 + 0x10);
  dVar2 = *(double *)(param_1 + 0x10);
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                  (ushort)(dVar1 < dVar2) << 8 |
                                  (ushort)(NAN(dVar1) || NAN(dVar2)) << 10 |
                                  (ushort)(dVar1 == dVar2) << 0xe) >> 8),(dVar1 == dVar2) != 0);
}

