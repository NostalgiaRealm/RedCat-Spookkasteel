/*
 * FUN_0053a7c8 at 0053a7c8
 * undefined __register FUN_0053a7c8(int * param_1, undefined4 * param_2, char param_3, undefined1 param_4)
 * Address ranges: 0053a7c8-0053a85a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 52 for TOAGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 52 for
   TOAGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_0053a7c8(int *param_1,undefined4 *param_2,char param_3,undefined1 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  int *local_8;
  
  local_10 = *param_2;
  uStack_c = param_2[1];
  local_8 = param_1;
  if (param_1[0xb2] == 0) {
    if ((char)param_1[0xb6] == '\x01') {
      FUN_00539d5c(param_1);
    }
    if (((char)local_8[0xb6] == '\0') && (*(char *)((int)local_8 + 0x2d3) != '\0')) {
      FUN_0053ae38(local_8);
      *(undefined1 *)((int)local_8 + 0x2d3) = 0;
    }
    if (((char)local_8[0xb6] == '\x02') && (param_3 == '\0')) {
      FUN_00539d5c(local_8);
    }
  }
  FUN_00521fb0((int)local_8,&local_10,param_3,param_4);
  return;
}

