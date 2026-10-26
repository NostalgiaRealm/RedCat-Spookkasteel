/*
 * FUN_0046718c at 0046718c
 * undefined __register FUN_0046718c(int * param_1, byte param_2)
 * Address ranges: 0046718c-00467212
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x461e08 slot 18 for TCustomConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x461e08 slot 18 for
   TCustomConnection. Original bytes unchanged; names and types still inferred. */

void FUN_0046718c(int *param_1,byte param_2)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 8) & 2) != 0 & param_2) == 0) {
    bVar1 = (**(code **)(*param_1 + 0x38))();
    if (param_2 != bVar1) {
      if (param_2 == 0) {
        if (*(short *)((int)param_1 + 0x52) != 0) {
          (*(code *)param_1[0x14])(param_1[0x15],param_1);
        }
        FUN_00467220((int)param_1,0);
        (**(code **)(*param_1 + 0x34))();
        if (*(short *)((int)param_1 + 0x42) != 0) {
          (*(code *)param_1[0x10])(param_1[0x11],param_1);
        }
      }
      else {
        if (*(short *)((int)param_1 + 0x4a) != 0) {
          (*(code *)param_1[0x12])(param_1[0x13],param_1);
        }
        (**(code **)(*param_1 + 0x30))();
        FUN_00467220((int)param_1,1);
        if (*(short *)((int)param_1 + 0x3a) != 0) {
          (*(code *)param_1[0xe])(param_1[0xf],param_1);
        }
      }
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x31) = 1;
  }
  return;
}

