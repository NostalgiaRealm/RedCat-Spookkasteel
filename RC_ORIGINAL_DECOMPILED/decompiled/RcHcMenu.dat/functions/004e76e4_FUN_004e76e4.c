/*
 * FUN_004e76e4 at 004e76e4
 * char __register FUN_004e76e4(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 004e76e4-004e7773;004e779b-004e77ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 29 for TFloatProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 29 for
   TFloatProp. Original bytes unchanged; names and types still inferred. */

char FUN_004e76e4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x4e76f8;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    puStack_28 = (undefined1 *)0x4e7704;
    cVar1 = (**(code **)(*param_1 + 0x50))();
    if ((cVar1 == '\0') && (*(double *)(param_1 + 0xe) == (double)CONCAT44(param_5,param_4))) {
      cVar1 = '\0';
      goto LAB_004e771c;
    }
  }
  cVar1 = '\x01';
LAB_004e771c:
  if (cVar1 != '\0') {
    param_1[0xe] = param_4;
    param_1[0xf] = param_5;
    puStack_28 = (undefined1 *)0x4e7754;
    FUN_004969e4((int)param_1);
    puStack_2c = &LAB_004e7774;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0045fa7c(param_1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x4e77a3;
    FUN_0045f9d8(param_1);
  }
  return cVar1;
}

