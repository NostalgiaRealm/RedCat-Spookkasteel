/*
 * FUN_00482dec at 00482dec
 * undefined __register FUN_00482dec(int * param_1)
 * Address ranges: 00482dec-00482eac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d7a0 slot 13 for TDatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d7a0 slot 13 for
   TDatabase. Original bytes unchanged; names and types still inferred. */

void FUN_00482dec(int *param_1)

{
  int iVar1;
  int *local_8;
  
  if (param_1[0x1c] != 0) {
    FUN_00482860((int)param_1);
    FUN_00480a24(param_1[0x1e]);
    local_8 = (int *)0x482e1c;
    FUN_00482eb4(param_1);
    if ((char)param_1[0x19] != '\0') {
      local_8 = param_1 + 0x1d;
      thunk_FUN_00479500(local_8);
    }
    *(undefined1 *)(local_8 + 0x19) = 0;
    iVar1 = FUN_0047f0a8();
    local_8[0x1d] = *(int *)(iVar1 + 0x30);
    if (*(char *)((int)local_8 + 0x67) == '\0') {
      FUN_004807cc(local_8[0x1e],(int)local_8);
    }
    else {
      *(undefined1 *)((int)local_8 + 0x67) = 0;
    }
    *(undefined1 *)((int)local_8 + 0x66) = 0;
    local_8[0x1c] = 0;
    local_8[0x1b] = 0;
    if (*(char *)((int)local_8 + 99) != '\0') {
      iVar1 = 1;
      FUN_004816ac(local_8[0x1e],(undefined *)local_8[0x22],'\x04','\x01');
      *(undefined1 *)(iVar1 + 99) = 0;
    }
  }
  return;
}

