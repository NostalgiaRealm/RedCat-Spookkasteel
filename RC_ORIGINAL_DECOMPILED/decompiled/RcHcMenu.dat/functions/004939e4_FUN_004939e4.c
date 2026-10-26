/*
 * FUN_004939e4 at 004939e4
 * undefined __register FUN_004939e4(int * param_1)
 * Address ranges: 004939e4-00493a39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 1 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 1 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_004939e4(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  byte local_28 [28];
  int *local_c;
  int *local_8;
  
  local_8 = param_1;
  FUN_0045febc();
  piVar3 = (int *)FUN_00493c6c((int)local_8);
  if (piVar3 == local_8) {
    bVar1 = FUN_00493e54(local_8,local_28);
    if (bVar1) {
      do {
        local_c = (int *)FUN_00494c5c(local_8,local_28);
        FUN_0045fee8(local_c);
        cVar2 = FUN_00493e78(local_8,local_28);
      } while (cVar2 != '\0');
    }
  }
  return;
}

