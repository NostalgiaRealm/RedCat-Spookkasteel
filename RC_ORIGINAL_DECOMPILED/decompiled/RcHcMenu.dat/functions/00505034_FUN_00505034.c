/*
 * FUN_00505034 at 00505034
 * char __register FUN_00505034(int * param_1, int param_2)
 * Address ranges: 00505034-005050b7;005050d9-005050ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00505034(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x50504b;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    puStack_28 = (undefined1 *)0x505057;
    cVar1 = (**(code **)(*param_1 + 0x50))();
    if ((cVar1 == '\0') && (param_1[0xe] == param_2)) {
      cVar1 = '\0';
      goto LAB_0050506c;
    }
  }
  cVar1 = '\x01';
LAB_0050506c:
  if (cVar1 != '\0') {
    param_1[0xe] = param_2;
    puStack_28 = (undefined1 *)0x505098;
    FUN_004969e4((int)param_1);
    puStack_2c = &LAB_005050b8;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0045fa7c(param_1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x5050e1;
    FUN_0045f9d8(param_1);
  }
  return cVar1;
}

