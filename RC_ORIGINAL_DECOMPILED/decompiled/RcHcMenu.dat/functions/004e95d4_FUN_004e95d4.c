/*
 * FUN_004e95d4 at 004e95d4
 * char __register FUN_004e95d4(int * param_1, char param_2)
 * Address ranges: 004e95d4-004e9657;004e9685-004e9696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_004e95d4(int *param_1,char param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4e95eb;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    puStack_1c = (undefined1 *)0x4e95f7;
    cVar1 = (**(code **)(*param_1 + 0x50))();
    if ((cVar1 == '\0') && ((char)param_1[0xe] == param_2)) {
      cVar1 = '\0';
      goto LAB_004e960c;
    }
  }
  cVar1 = '\x01';
LAB_004e960c:
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xe) = param_2;
    puStack_1c = (undefined1 *)0x4e9638;
    FUN_004969e4((int)param_1);
    puStack_20 = &LAB_004e9658;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0045fa7c(param_1);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4e968d;
    FUN_0045f9d8(param_1);
  }
  return cVar1;
}

