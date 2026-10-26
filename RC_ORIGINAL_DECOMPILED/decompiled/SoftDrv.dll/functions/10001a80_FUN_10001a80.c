/*
 * FUN_10001a80 at 10001a80
 * undefined FUN_10001a80(void)
 * Address ranges: 10001a80-10001b86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10001aa4) */

undefined4
FUN_10001a80(int *param_1,uint *param_2,int *param_3,int *param_4,uint *param_5,int *param_6,
            int *param_7,uint *param_8,int *param_9)

{
  int iVar1;
  uint uVar2;
  uint *unaff_retaddr;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  (**(code **)(*(int *)param_1[2] + 0x54))((int *)param_1[2]);
  *unaff_retaddr = uStack_1c >> 3;
  *param_2 = uStack_18;
  *param_5 = uStack_14;
  *param_8 = uStack_10;
  iVar1 = 0;
  for (uVar2 = uStack_18; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  *param_1 = iVar1;
  iVar1 = 0;
  for (uVar2 = uStack_14; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  *param_4 = iVar1;
  iVar1 = 0;
  for (uVar2 = uStack_10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  *param_7 = iVar1;
  uVar2 = uStack_18 >> ((byte)*param_1 & 0x1f);
  *param_3 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    *param_3 = *param_3 + 1;
  }
  uVar2 = uStack_14 >> ((byte)*param_4 & 0x1f);
  *param_6 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    *param_6 = *param_6 + 1;
  }
  uVar2 = uStack_10 >> ((byte)*param_7 & 0x1f);
  *param_9 = 0;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    *param_9 = *param_9 + 1;
  }
  return 1;
}

