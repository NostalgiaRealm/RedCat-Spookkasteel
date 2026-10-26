/*
 * FUN_0049398c at 0049398c
 * undefined __register FUN_0049398c(int * param_1)
 * Address ranges: 0049398c-004939e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 0 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 0 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049398c(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  byte local_28 [28];
  undefined4 *local_c;
  int *local_8;
  
  local_8 = param_1;
  FUN_0045feb0();
  piVar3 = (int *)FUN_00493c6c((int)local_8);
  if (piVar3 == local_8) {
    bVar1 = FUN_00493e54(local_8,local_28);
    if (bVar1) {
      do {
        local_c = (undefined4 *)FUN_00494c5c(local_8,local_28);
        FUN_0045fec8(local_c);
        cVar2 = FUN_00493e78(local_8,local_28);
      } while (cVar2 != '\0');
    }
  }
  return;
}

