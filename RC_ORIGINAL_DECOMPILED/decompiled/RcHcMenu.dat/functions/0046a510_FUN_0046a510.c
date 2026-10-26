/*
 * FUN_0046a510 at 0046a510
 * undefined4 __register FUN_0046a510(undefined4 param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046a510-0046a582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046a510(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *in_stack_00000fec;
  undefined4 uVar4;
  int local_14;
  
  iVar1 = 2;
  do {
    local_14 = iVar1;
    iVar1 = local_14 + -1;
  } while (local_14 + -1 != 0);
  uVar2 = FUN_00469218(in_stack_00000fec,(int)&local_14,CONCAT31((int3)((uint)param_3 >> 8),1));
  if ((char)uVar2 != '\0') {
    FUN_00403fe0(param_2,(char *)&local_14,0x2001);
    if ((*(char *)((int)in_stack_00000fec + 0xd1) != '\0') && (*param_2 != 0)) {
      uVar4 = 0;
      puVar3 = FUN_004041f4((undefined *)*param_2);
      (**(code **)(*(int *)in_stack_00000fec[10] + 0x248))
                ((int *)in_stack_00000fec[10],puVar3,puVar3,uVar4);
    }
  }
  return uVar2;
}

