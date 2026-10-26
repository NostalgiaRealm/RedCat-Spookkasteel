/*
 * FUN_0046a884 at 0046a884
 * undefined __register FUN_0046a884(int * param_1, VARIANT * param_2)
 * Address ranges: 0046a884-0046a8bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 23 for TWideStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 23 for
   TWideStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a884(int *param_1,VARIANT *param_2)

{
  char cVar1;
  undefined4 local_c;
  
  local_c = 0;
  cVar1 = FUN_00469218(param_1,(int)&local_c,0);
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    *(undefined4 *)((int)&param_2->n1 + 8) = local_c;
    (param_2->n1).n2.vt = 8;
  }
  return;
}

