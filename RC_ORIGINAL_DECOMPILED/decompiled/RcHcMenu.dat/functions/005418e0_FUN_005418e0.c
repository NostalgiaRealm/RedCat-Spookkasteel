/*
 * FUN_005418e0 at 005418e0
 * undefined __register FUN_005418e0(int * param_1, char param_2)
 * Address ranges: 005418e0-00541a09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005418e0(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  undefined4 local_28 [7];
  char local_9;
  int *local_8;
  
  bVar6 = 0;
  local_9 = param_2;
  local_8 = param_1;
  uVar2 = FUN_0053eb9c(param_1[0xa0]);
  if ((char)uVar2 != local_9) {
    FUN_004efd24((int)local_8);
    FUN_00432800(local_8[0x9f]);
    *(undefined1 *)(local_8 + 0xa6) = 0;
    FUN_0053ee5c((int *)local_8[0xa0],local_9);
    if ((*(int *)(local_8[0xa0] + 0x3bc) != 0) &&
       (iVar3 = FUN_0048ec24(*(int *)(local_8[0xa0] + 0x3bc)), 0 < iVar3)) {
      FUN_0048f02c(*(int **)(local_8[0xa0] + 0x3bc),0,local_28);
      FUN_004f9a04((int *)local_8[0x9f],local_28);
      piVar4 = (int *)(local_8[0x9f] + 0x208);
      piVar5 = local_8 + 0x90;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
    }
    (**(code **)(*local_8 + 0xe0))();
    if ((char)local_8[0x8a] == '\0') {
      cVar1 = FUN_00543134((int)local_8);
      if ((cVar1 == '\0') && (uVar2 = FUN_00543188((int)local_8), (char)uVar2 == '\0')) {
        (**(code **)(*local_8 + 200))();
        return;
      }
      FUN_00432744(local_8[0x9f],(uint *)0x0);
    }
    else {
      (**(code **)(*local_8 + 0xc4))();
    }
  }
  return;
}

