/*
 * Replicator::operator+= at 00615652
 * Replicator * __thiscall operator+=(Replicator * this, DName * param_1)
 * Address ranges: 00615652-00615698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: class Replicator & __thiscall Replicator::operator+=(class DName const &)  Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
 */

/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  int iVar1;
  
  if (*(int *)this != 9) {
    iVar1 = FUN_0061503c();
    if (iVar1 == 0) {
      iVar1 = FUN_00614d0f(8,0);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00614df0(param_1);
      }
      if (iVar1 != 0) {
        *(int *)this = *(int *)this + 1;
        *(int *)(this + *(int *)this * 4 + 4) = iVar1;
      }
    }
  }
  return this;
}

