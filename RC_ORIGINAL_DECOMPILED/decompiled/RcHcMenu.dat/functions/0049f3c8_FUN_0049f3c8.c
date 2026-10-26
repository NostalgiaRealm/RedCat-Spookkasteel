/*
 * FUN_0049f3c8 at 0049f3c8
 * undefined __register FUN_0049f3c8(undefined4 param_1, byte * param_2, int param_3, byte * param_4)
 * Address ranges: 0049f3c8-0049f463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f3c8(undefined4 param_1,byte *param_2,int param_3,byte *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint *local_1c;
  uint *local_18;
  undefined1 local_11;
  int local_10;
  byte *local_c;
  undefined4 local_8;
  
  local_18 = (uint *)0x0;
  local_1c = (uint *)0x0;
  puStack_24 = (undefined1 *)0x49f3e8;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_24 = (undefined1 *)0x49f3f0;
  FUN_004041e4((int)param_4);
  uVar3 = 1;
  puStack_28 = &LAB_0049f464;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_004096cc(local_c,(int *)&local_18);
  puVar1 = local_18;
  FUN_004096cc(param_4,(int *)&local_1c);
  FUN_00404140(puVar1,local_1c);
  if ((bool)uVar3) {
    iVar2 = FUN_00409d68(param_4);
    if (iVar2 == local_10) {
      local_11 = 1;
      goto LAB_0049f436;
    }
  }
  local_11 = 0;
LAB_0049f436:
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0049f46b;
  puStack_28 = (undefined1 *)0x49f453;
  FUN_00403dd4((int *)&local_1c,2);
  puStack_28 = (undefined1 *)0x49f45b;
  FUN_00403db0((int *)&local_c);
  puStack_28 = (undefined1 *)0x49f463;
  FUN_00403db0((int *)&param_4);
  return;
}

