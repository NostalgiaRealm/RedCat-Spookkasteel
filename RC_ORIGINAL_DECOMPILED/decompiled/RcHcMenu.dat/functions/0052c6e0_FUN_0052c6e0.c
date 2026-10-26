/*
 * FUN_0052c6e0 at 0052c6e0
 * undefined1 __register FUN_0052c6e0(int * param_1, int * param_2, char param_3)
 * Address ranges: 0052c6e0-0052c725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 11 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 11 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0052c6e0(int *param_1,int *param_2,char param_3)

{
  uint local_14;
  undefined1 local_e;
  char local_d;
  int *local_c;
  int *local_8;
  
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x54))();
  }
  local_e = FUN_004e2d04((int *)local_8[0x20],local_c,&local_14);
  FUN_0052c25c(local_8,local_14);
  return local_e;
}

