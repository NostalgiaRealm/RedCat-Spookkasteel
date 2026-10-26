/*
 * FUN_0046c5d0 at 0046c5d0
 * undefined __register FUN_0046c5d0(int * param_1, int * param_2)
 * Address ranges: 0046c5d0-0046c602
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464978 slot 22 for TBCDField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464978 slot 22 for
   TBCDField. Original bytes unchanged; names and types still inferred. */

void FUN_0046c5d0(int *param_1,int *param_2)

{
  char cVar1;
  undefined1 local_10 [8];
  
  cVar1 = FUN_0046c798(param_1,(int)local_10);
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    FUN_0040a9a0(param_2);
  }
  return;
}

