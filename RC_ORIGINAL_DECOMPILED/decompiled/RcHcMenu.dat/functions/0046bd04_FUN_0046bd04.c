/*
 * FUN_0046bd04 at 0046bd04
 * undefined __register FUN_0046bd04(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0046bd04-0046bd1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 47 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 47 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

void FUN_0046bd04(int *param_1,VARIANTARG *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004051b8(param_2);
  (**(code **)(*param_1 + 0x88))(param_1,bVar1);
  return;
}

