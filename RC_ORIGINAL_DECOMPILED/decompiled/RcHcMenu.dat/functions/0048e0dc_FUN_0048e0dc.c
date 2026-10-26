/*
 * FUN_0048e0dc at 0048e0dc
 * char __register FUN_0048e0dc(int param_1, int param_2)
 * Address ranges: 0048e0dc-0048e147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_0048e0dc(int param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  char local_d;
  
  if ((*(int *)(param_1 + 0x18) == 0) || ((*(int *)(param_1 + 0x18) == param_2 && (param_2 != 0))))
  {
    local_d = '\x01';
  }
  else {
    local_d = '\0';
  }
  if ((local_d == '\0') && (param_2 != 0)) {
    ppuVar1 = (undefined **)FUN_0040301c(param_2);
    if (ppuVar1 != &PTR_FUN_0048e834) {
      iVar2 = FUN_0040301c(param_2);
      local_d = FUN_0048e0dc(param_1,iVar2);
    }
  }
  return local_d;
}

