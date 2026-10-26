/*
 * FUN_00493b0c at 00493b0c
 * undefined __register FUN_00493b0c(int * param_1)
 * Address ranges: 00493b0c-00493b54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 3 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 3 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_00493b0c(int *param_1)

{
  bool bVar1;
  char cVar2;
  byte local_28 [28];
  int *local_c;
  int *local_8;
  
  local_8 = param_1;
  bVar1 = FUN_004940cc(param_1,local_28);
  if (bVar1) {
    do {
      local_c = (int *)FUN_00494c5c(local_8,local_28);
      FUN_0045fa7c(local_c);
      cVar2 = FUN_004940f4(local_8,local_28);
    } while (cVar2 != '\0');
  }
  (**(code **)(*local_8 + 0x24))();
  return;
}

