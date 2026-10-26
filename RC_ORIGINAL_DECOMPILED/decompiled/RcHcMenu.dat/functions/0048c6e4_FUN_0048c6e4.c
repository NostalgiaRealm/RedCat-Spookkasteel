/*
 * FUN_0048c6e4 at 0048c6e4
 * char __register FUN_0048c6e4(int * param_1, int param_2)
 * Address ranges: 0048c6e4-0048c767;0048c795-0048c7a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48c40c slot 28 for TFKIntegerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48c40c slot 28 for
   TFKIntegerProp. Original bytes unchanged; names and types still inferred. */

char FUN_0048c6e4(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x48c6fb;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    puStack_28 = (undefined1 *)0x48c707;
    cVar1 = (**(code **)(*param_1 + 0x50))();
    if ((cVar1 == '\0') && (param_1[0x10] == param_2)) {
      cVar1 = '\0';
      goto LAB_0048c71c;
    }
  }
  cVar1 = '\x01';
LAB_0048c71c:
  if (cVar1 != '\0') {
    param_1[0x10] = param_2;
    puStack_28 = (undefined1 *)0x48c748;
    FUN_004969e4((int)param_1);
    puStack_2c = &LAB_0048c768;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0045fa7c(param_1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x48c79d;
    FUN_0045f9d8(param_1);
  }
  return cVar1;
}

