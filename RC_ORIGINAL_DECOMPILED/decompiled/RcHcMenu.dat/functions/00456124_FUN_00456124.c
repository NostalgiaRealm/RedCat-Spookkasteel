/*
 * FUN_00456124 at 00456124
 * undefined __register FUN_00456124(int * param_1, int * param_2)
 * Address ranges: 00456124-00456153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot 35 for TSplitter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot 35 for
   TSplitter. Original bytes unchanged; names and types still inferred. */

void FUN_00456124(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
  if (((cVar1 != '\0') && (*param_2 <= param_1[0x52])) && ((char)param_1[0x4b] != '\0')) {
    *param_2 = 0;
  }
  return;
}

