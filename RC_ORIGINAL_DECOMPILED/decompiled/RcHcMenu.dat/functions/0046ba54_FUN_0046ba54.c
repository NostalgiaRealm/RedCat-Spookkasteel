/*
 * FUN_0046ba54 at 0046ba54
 * undefined __register FUN_0046ba54(int * param_1, VARIANTARG * param_2, undefined4 param_3)
 * Address ranges: 0046ba54-0046ba8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 23 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 23 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ba54(int *param_1,VARIANTARG *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c;
  
  local_c = param_3;
  cVar1 = FUN_00469218(param_1,(int)&local_c,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_004053f4(param_2,(short)local_c != 0);
  }
  return;
}

