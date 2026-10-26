/*
 * FUN_0046f5f8 at 0046f5f8
 * undefined __register FUN_0046f5f8(char * param_1, int * param_2)
 * Address ranges: 0046f5f8-0046f665
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046f5f8(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x46f60b;
  iVar1 = FUN_0040a108(param_1);
  puStack_18 = (undefined1 *)0x46f619;
  pcVar2 = (char *)FUN_0040960c((uint)(ushort)((short)iVar1 + 1));
  puStack_18 = (undefined1 *)0x46f623;
  FUN_00403db0(param_2);
  puStack_1c = &LAB_0046f666;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0040a170(pcVar2,param_1);
  FUN_0046f58c();
  FUN_0040a34c(pcVar2,param_2);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046f66d;
  puStack_1c = (undefined1 *)0x46f665;
  FUN_00402800((int)pcVar2);
  return;
}

