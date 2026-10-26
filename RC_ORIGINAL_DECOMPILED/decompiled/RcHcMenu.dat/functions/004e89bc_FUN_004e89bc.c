/*
 * FUN_004e89bc at 004e89bc
 * char __register FUN_004e89bc(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 004e89bc-004e8a4d;004e8a75-004e8a88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 29 for TCurrencyProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 29 for
   TCurrencyProp. Original bytes unchanged; names and types still inferred. */

char FUN_004e89bc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  if ((float10)CONCAT44(param_5,param_4) == (float10)*(longlong *)(param_1 + 0xe)) {
    puStack_28 = (undefined1 *)0x4e89e0;
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      puStack_28 = (undefined1 *)0x4e89ec;
      cVar1 = (**(code **)(*param_1 + 0x50))();
      if (cVar1 == '\0') {
        cVar1 = '\0';
        goto LAB_004e89f6;
      }
    }
  }
  cVar1 = '\x01';
LAB_004e89f6:
  if (cVar1 != '\0') {
    param_1[0xe] = param_4;
    param_1[0xf] = param_5;
    puStack_28 = (undefined1 *)0x4e8a2e;
    FUN_004969e4((int)param_1);
    puStack_2c = &LAB_004e8a4e;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0045fa7c(param_1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x4e8a7d;
    FUN_0045f9d8(param_1);
  }
  return cVar1;
}

