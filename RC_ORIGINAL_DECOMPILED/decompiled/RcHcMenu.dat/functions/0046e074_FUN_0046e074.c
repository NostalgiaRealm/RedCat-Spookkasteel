/*
 * FUN_0046e074 at 0046e074
 * undefined __register FUN_0046e074(int * param_1, VARIANT * param_2, undefined4 param_3)
 * Address ranges: 0046e074-0046e098
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 23 for TVariantField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 23 for
   TVariantField. Original bytes unchanged; names and types still inferred. */

void FUN_0046e074(int *param_1,VARIANT *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00469218(param_1,(int)param_2,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  return;
}

