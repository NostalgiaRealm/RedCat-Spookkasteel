/*
 * FUN_0048bcd8 at 0048bcd8
 * char __register FUN_0048bcd8(int * param_1, int param_2)
 * Address ranges: 0048bcd8-0048bd5b;0048bd7d-0048bd8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0048bcd8(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x48bcef;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    puStack_28 = (undefined1 *)0x48bcfb;
    cVar1 = (**(code **)(*param_1 + 0x50))();
    if ((cVar1 == '\0') && (param_1[0xe] == param_2)) {
      cVar1 = '\0';
      goto LAB_0048bd10;
    }
  }
  cVar1 = '\x01';
LAB_0048bd10:
  if (cVar1 != '\0') {
    param_1[0xe] = param_2;
    puStack_28 = (undefined1 *)0x48bd3c;
    FUN_004969e4((int)param_1);
    puStack_2c = &LAB_0048bd5c;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_0045fa7c(param_1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x48bd85;
    FUN_0045f9d8(param_1);
  }
  return cVar1;
}

