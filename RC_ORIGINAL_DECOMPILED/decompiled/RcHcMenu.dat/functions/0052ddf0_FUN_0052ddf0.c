/*
 * FUN_0052ddf0 at 0052ddf0
 * undefined __register FUN_0052ddf0(void)
 * Address ranges: 0052ddf0-0052e0f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052ddf0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  char *pcVar5;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  pcVar5 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffee0;
  iVar2 = FUN_0045da14(*(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_c = uVar3 + 1;
    local_8 = 0;
    do {
      cVar1 = FUN_004e257c(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),local_8)
      ;
      if (cVar1 == '\x02') {
        cVar1 = FUN_004e260c(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),
                             local_8);
        if (cVar1 == '\0') {
          piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                0x80),local_8);
          cVar1 = FUN_0052dcc0(*(int *)(*(int *)(in_stack_00000004 + 8) + -4),piVar4);
          if (cVar1 != '\0') {
            piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                  0x80),local_8);
            FUN_004d1dc8(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4);
            FUN_004e2630(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),local_8,1)
            ;
          }
        }
        else {
          piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                0x80),local_8);
          piVar4 = (int *)FUN_004949bc(piVar4);
          cVar1 = (**(code **)(*piVar4 + 0x4c))();
          if (cVar1 == '\0') {
            FUN_00403d94("Assertion failure");
          }
          piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                0x80),local_8);
          cVar1 = FUN_0052dcc0(*(int *)(*(int *)(in_stack_00000004 + 8) + -4),piVar4);
          if (cVar1 == '\0') {
            piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                  0x80),local_8);
            piVar4 = (int *)FUN_004949bc(piVar4);
            pcVar5 = (char *)0x52e006;
            cVar1 = (**(code **)(*piVar4 + 0x4c))();
            if (cVar1 == '\0') {
              FUN_00403d94("Assertion failure");
            }
            piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                  0x80),local_8);
            FUN_004d4718(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4,
                         '\0');
            FUN_004e2630(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),local_8,0)
            ;
          }
          else {
            iVar2 = *(int *)(*(int *)(in_stack_00000004 + 8) + -4);
            pcVar5 = (char *)CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar2 + 0x42));
            piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) +
                                                  0x80),local_8);
            FUN_004d2358(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4,
                         CONCAT31((int3)((uint)extraout_ECX >> 8),
                                  *(undefined1 *)
                                   (*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x41)),
                         (byte)pcVar5);
          }
        }
      }
      else if (cVar1 == '\x03') {
        cVar1 = FUN_004e260c(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),
                             local_8);
        if (cVar1 != '\0') {
          FUN_00402fe0(**(int **)(*(int *)(in_stack_00000004 + 8) + -4),local_114);
          FUN_00403fd4(&local_14,local_114);
          pcVar5 = " Internal inconsistency";
          FUN_004040f0(&local_10,3);
          FUN_00403d94(local_10);
        }
        piVar4 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80
                                              ),local_8);
        FUN_004d1dc8(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar4);
        FUN_004e2630(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x80),local_8,1);
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *in_FS_OFFSET = pcVar5;
  FUN_00403dd4(&local_14,2);
  return;
}

