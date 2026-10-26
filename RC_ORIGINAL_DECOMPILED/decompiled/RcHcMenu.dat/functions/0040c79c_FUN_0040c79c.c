/*
 * FUN_0040c79c at 0040c79c
 * undefined __register FUN_0040c79c(void)
 * Address ranges: 0040c79c-0040c8ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040c79c(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  LCID local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  puStack_30 = &LAB_0040c8af;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = GetThreadLocale();
  iVar1 = 1;
  piVar2 = (int *)&DAT_0057351c;
  piVar3 = (int *)&DAT_0057354c;
  do {
    FUN_0040c760(iVar1 + 0x43,iVar1 + -1,0x56f1cc,(int *)&local_10,0xb,(int)&stack0xfffffffc);
    FUN_00403e04(piVar2,local_10);
    FUN_0040c760(iVar1 + 0x37,iVar1 + -1,0x56f1fc,(int *)&local_14,0xb,(int)&stack0xfffffffc);
    FUN_00403e04(piVar3,local_14);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0xd);
  iVar1 = 1;
  piVar2 = (int *)&DAT_0057357c;
  piVar3 = (int *)&DAT_00573598;
  do {
    local_c = (iVar1 + 5) % 7;
    FUN_0040c760(local_c + 0x31,iVar1 + -1,0x56f22c,(int *)&local_18,6,(int)&stack0xfffffffc);
    FUN_00403e04(piVar2,local_18);
    FUN_0040c760(local_c + 0x2a,iVar1 + -1,0x56f248,(int *)&local_1c,6,(int)&stack0xfffffffc);
    FUN_00403e04(piVar3,local_1c);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040c8b6;
  puStack_30 = (undefined1 *)0x40c8ae;
  FUN_00403dd4((int *)&local_1c,4);
  return;
}

