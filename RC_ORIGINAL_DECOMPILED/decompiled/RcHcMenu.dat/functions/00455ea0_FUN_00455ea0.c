/*
 * FUN_00455ea0 at 00455ea0
 * int * __register FUN_00455ea0(int param_1)
 * Address ranges: 00455ea0-00455f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00455ea0(int param_1)

{
  POINT pt;
  char cVar1;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  int local_28;
  int local_24;
  RECT RStack_20;
  
  FUN_0041160c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),&local_28);
  cVar1 = *(char *)(param_1 + 0x4b);
  if (cVar1 == '\x01') {
    local_24 = local_24 + -1;
  }
  else if (cVar1 == '\x02') {
    local_24 = local_24 + *(int *)(param_1 + 0x3c);
  }
  else if (cVar1 == '\x03') {
    local_28 = local_28 + -1;
  }
  else {
    if (cVar1 != '\x04') {
      return (int *)0x0;
    }
    local_28 = local_28 + *(int *)(param_1 + 0x38);
  }
  iVar2 = FUN_0043579c(*(int *)(param_1 + 0x24));
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_00435760(*(int *)(param_1 + 0x24),iVar5);
      if ((*(char *)((int)piVar3 + 0x47) != '\0') &&
         (cVar1 = (**(code **)(*piVar3 + 0x4c))(), cVar1 != '\0')) {
        FUN_0043211c((int)piVar3,&RStack_20.left);
        if (RStack_20.right == RStack_20.left) {
          if ((*(char *)(param_1 + 0x4b) == '\x01') || (*(char *)(param_1 + 0x4b) == '\x03')) {
            RStack_20.left = RStack_20.left + -1;
          }
          else {
            RStack_20.right = RStack_20.right + 1;
          }
        }
        if (RStack_20.bottom == RStack_20.top) {
          if ((*(char *)(param_1 + 0x4b) == '\x01') || (*(char *)(param_1 + 0x4b) == '\x03')) {
            RStack_20.top = RStack_20.top + -1;
          }
          else {
            RStack_20.bottom = RStack_20.bottom + 1;
          }
        }
        pt.y = local_24;
        pt.x = local_28;
        BVar4 = PtInRect(&RStack_20,pt);
        if (BVar4 != 0) {
          return piVar3;
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}

