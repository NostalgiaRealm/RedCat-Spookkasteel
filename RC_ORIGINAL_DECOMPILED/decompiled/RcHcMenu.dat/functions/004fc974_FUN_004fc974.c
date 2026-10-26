/*
 * FUN_004fc974 at 004fc974
 * undefined __register FUN_004fc974(int * param_1)
 * Address ranges: 004fc974-004fc9d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fb364 slot 45 for TDaviCalculator. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fb364 slot 45 for
   TDaviCalculator. Original bytes unchanged; names and types still inferred. */

void FUN_004fc974(int *param_1)

{
  RECT local_1c;
  int *local_c;
  int *local_8;
  
  local_c = (int *)param_1[0x7c];
  local_8 = param_1;
  FUN_0041c318((int *)local_c[5],0x8000000f);
  (**(code **)(*local_8 + 0x40))(local_8,&local_1c);
  FUN_0041c9f8(local_c,&local_1c);
  if ((char)local_8[0x92] != '\0') {
    FUN_0041cb34(local_c,local_1c.left,local_1c.top,local_1c.bottom,local_1c.right);
  }
  return;
}

