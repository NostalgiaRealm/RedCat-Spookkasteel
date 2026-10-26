/*
 * FUN_004f1158 at 004f1158
 * undefined __register FUN_004f1158(int * param_1)
 * Address ranges: 004f1158-004f11d1;004f1211-004f1226
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f1158(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_24 = &LAB_004f1227;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    puStack_2c = (undefined1 *)0x4f1191;
    FUN_00403d94("CopyValueToAppProp:  Parameter cannot be nil");
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puStack_30 = &LAB_004f11d2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (local_8 != (int *)0x0) {
    puStack_2c = &stack0xfffffffc;
    piVar3 = FUN_00406aa0((int *)&local_c);
    cVar2 = FUN_00403128(local_8,(int *)&DAT_004f1298,piVar3);
    if (cVar2 != '\0') {
      (**(code **)(*local_c + 0x74))();
    }
  }
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f122e;
  puStack_24 = (undefined1 *)0x4f1226;
  FUN_00406aa0((int *)&local_c);
  return;
}

